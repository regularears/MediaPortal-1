#region Copyright (C) 2007-2008 Team MediaPortal

/*
    Copyright (C) 2007-2008 Team MediaPortal
    http://www.team-mediaportal.com
 
    This file is part of MediaPortal II

    MediaPortal II is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    MediaPortal II is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with MediaPortal II.  If not, see <http://www.gnu.org/licenses/>.
*/
#endregion

using System.Collections.Generic;
using Presentation.SkinEngine.Controls.Visuals;

namespace Presentation.SkinEngine.Controls.Animations
{
  public class StoryboardContext
  {
    List<AnimationContext> _animationContext;
    Storyboard _storyboard;
    UIElement _element;
    public StoryboardContext(Storyboard group,UIElement element)
    {
      _storyboard = group;
      _element = element;
    }
    public Storyboard Storyboard
    {
      get
      {
        return _storyboard;
      }
    }
    public UIElement Element
    {
      get
      {
        return _element;
      }
    }
    public void Setup(UIElement element)
    {
      _animationContext = new List<AnimationContext>();
      for (int i = 0; i < _storyboard.Children.Count; ++i)
      {
        AnimationContext context = new AnimationContext(element);
        _animationContext.Add(context);
        _storyboard.Children[i].Setup(_animationContext[i]);
      }
    }

    public void Start(uint timePassed)
    {
      for (int i = 0; i < _storyboard.Children.Count; ++i)
      {
        _storyboard.Children[i].Start(_animationContext[i], timePassed);
      }
    }
    public void Stop()
    {
      for (int i = 0; i < _storyboard.Children.Count; ++i)
      {
        _storyboard.Children[i].Stop(_animationContext[i]);
      }
    }
    public void Animate(uint timePassed)
    {
      for (int i = 0; i < _storyboard.Children.Count; ++i)
      {
        _storyboard.Children[i].Animate(_animationContext[i], timePassed);
      }
    }
    public bool IsStopped
    {
      get
      {
        for (int i = 0; i < _storyboard.Children.Count; ++i)
        {
          if (!_storyboard.Children[i].IsStopped(_animationContext[i])) return false;
        }
        return true;
      }
    }
  }
}
