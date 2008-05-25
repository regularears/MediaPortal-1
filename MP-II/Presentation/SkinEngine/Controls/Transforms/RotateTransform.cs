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

using System;
using MediaPortal.Presentation.Properties;
using SlimDX;
using MediaPortal.Utilities.DeepCopy;

namespace Presentation.SkinEngine.Controls.Transforms
{
  public class RotateTransform : Transform
  {
    #region Private fields

    Property _centerXProperty;
    Property _centerYProperty;
    Property _angleProperty;

    #endregion

    #region Ctor

    public RotateTransform()
    {
      Init();
    }

    void Init()
    {
      _centerYProperty = new Property(typeof(double), 0.0);
      _centerXProperty = new Property(typeof(double), 0.0);
      _angleProperty = new Property(typeof(double), 0.0);

      _centerYProperty.Attach(OnPropertyChanged);
      _centerXProperty.Attach(OnPropertyChanged);
      _angleProperty.Attach(OnPropertyChanged);
    }

    public override void DeepCopy(IDeepCopyable source, ICopyManager copyManager)
    {
      base.DeepCopy(source, copyManager);
      RotateTransform t = source as RotateTransform;
      CenterX = copyManager.GetCopy(t.CenterX);
      CenterY = copyManager.GetCopy(t.CenterY);
      Angle = copyManager.GetCopy(t.Angle);
    }

    #endregion
    #region Protected methods

    protected void OnPropertyChanged(Property property)
    {
      _needUpdate = true;
      Fire();
    }

    #endregion

    #region Public properties

    public Property CenterXProperty
    {
      get { return _centerXProperty; }
    }

    public double CenterX
    {
      get { return (double)_centerXProperty.GetValue(); }
      set { _centerXProperty.SetValue(value); }
    }

    public Property CenterYProperty
    {
      get { return _centerYProperty; }
    }

    public double CenterY
    {
      get { return (double)_centerYProperty.GetValue(); }
      set { _centerYProperty.SetValue(value); }
    }

    public Property AngleProperty
    {
      get { return _angleProperty; }
    }

    public double Angle
    {
      get { return (double)_angleProperty.GetValue(); }
      set { _angleProperty.SetValue(value); }
    }

    #endregion

    public override void UpdateTransform()
    {
      base.UpdateTransform();
      double radians = Angle / 180.0 * Math.PI;

      if (CenterX == 0.0 && CenterY == 0.0)
      {
        _matrix = Matrix.RotationZ((float)radians);
      }
      else
      {
        _matrix = Matrix.Translation((float)-CenterX * SkinContext.Zoom.Width, (float)-CenterY * SkinContext.Zoom.Height, 0);
        _matrix *= Matrix.RotationZ((float)radians);
        _matrix *= Matrix.Translation((float)CenterX * SkinContext.Zoom.Width, (float)CenterY * SkinContext.Zoom.Height, 0);
      }
    }

    public override void UpdateTransformRel()
    {
      base.UpdateTransformRel();
      double radians = Angle / 180.0 * Math.PI;

      if (CenterX == 0.0 && CenterY == 0.0)
      {
        _matrixRel = Matrix.RotationZ((float)radians);
      }
      else
      {
        _matrixRel = Matrix.Translation((float)-CenterX, (float)-CenterY, 0);
        _matrixRel *= Matrix.RotationZ((float)radians);
        _matrixRel *= Matrix.Translation((float)CenterX, (float)CenterY, 0);
      }
    }
  }
}
