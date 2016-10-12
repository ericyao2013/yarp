// Generated by gtkmmproc -- DO NOT MODIFY!


#include <goocanvasmm/itemsimple.h>
#include <goocanvasmm/private/itemsimple_p.h>

/* Copyright (C) 1998-2006 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <goocanvasitemsimple.h>
#include <goocanvasmm/canvas.h>


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Goocanvas::ItemSimple> wrap(GooCanvasItemSimple* object, bool take_copy)
{
  return Glib::RefPtr<Goocanvas::ItemSimple>( dynamic_cast<Goocanvas::ItemSimple*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Goocanvas
{


/* The *_Class implementation: */

const Glib::Class& ItemSimple_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &ItemSimple_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(goo_canvas_item_simple_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  Item::add_interface(get_type());

  }

  return *this;
}


void ItemSimple_Class::class_init_function(void* g_class, void* class_data)
{
  BaseClassType *const klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);

  klass->simple_create_path = &simple_create_path_vfunc_callback;
  klass->simple_update = &simple_update_vfunc_callback;
  klass->simple_paint = &simple_paint_vfunc_callback;
  klass->simple_is_item_at = &simple_is_item_at_vfunc_callback;

}

void ItemSimple_Class::simple_create_path_vfunc_callback(GooCanvasItemSimple* self, cairo_t* cr)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->simple_create_path_vfunc(Cairo::RefPtr<Cairo::Context>(new Cairo::Context(cr, false /* has reference */))
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->simple_create_path)
    (*base->simple_create_path)(self, cr);

}
void ItemSimple_Class::simple_update_vfunc_callback(GooCanvasItemSimple* self, cairo_t* cr)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->simple_update_vfunc(Cairo::RefPtr<Cairo::Context>(new Cairo::Context(cr, false /* has reference */))
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->simple_update)
    (*base->simple_update)(self, cr);

}
void ItemSimple_Class::simple_paint_vfunc_callback(GooCanvasItemSimple* self, cairo_t* cr, const GooCanvasBounds* bounds)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        obj->simple_paint_vfunc(Cairo::RefPtr<Cairo::Context>(new Cairo::Context(cr, false /* has reference */))
, Glib::wrap(bounds)
);
        return;
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->simple_paint)
    (*base->simple_paint)(self, cr, bounds);

}
gboolean ItemSimple_Class::simple_is_item_at_vfunc_callback(GooCanvasItemSimple* self, gdouble x, gdouble y, cairo_t* cr, gboolean is_pointer_event)
{
  Glib::ObjectBase *const obj_base = static_cast<Glib::ObjectBase*>(
      Glib::ObjectBase::_get_current_wrapper((GObject*)self));

  // Non-gtkmmproc-generated custom classes implicitly call the default
  // Glib::ObjectBase constructor, which sets is_derived_. But gtkmmproc-
  // generated classes can use this optimisation, which avoids the unnecessary
  // parameter conversions if there is no possibility of the virtual function
  // being overridden:
  if(obj_base && obj_base->is_derived_())
  {
    CppObjectType *const obj = dynamic_cast<CppObjectType* const>(obj_base);
    if(obj) // This can be NULL during destruction.
    {
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      try // Trap C++ exceptions which would normally be lost because this is a C callback.
      {
      #endif //GLIBMM_EXCEPTIONS_ENABLED
        // Call the virtual member method, which derived classes might override.
        return static_cast<int>(obj->simple_is_item_at_vfunc(x
, y
, Cairo::RefPtr<Cairo::Context>(new Cairo::Context(cr, false /* has reference */))
, is_pointer_event
));
      #ifdef GLIBMM_EXCEPTIONS_ENABLED
      }
      catch(...)
      {
        Glib::exception_handlers_invoke();
      }
      #endif //GLIBMM_EXCEPTIONS_ENABLED
    }
  }
  
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(self)) // Get the parent class of the object class (The original underlying C class).
  );

  // Call the original underlying C function:
  if(base && base->simple_is_item_at)
    return (*base->simple_is_item_at)(self, x, y, cr, is_pointer_event);


  typedef gboolean RType;
  return RType();
}


Glib::ObjectBase* ItemSimple_Class::wrap_new(GObject* object)
{
  return new ItemSimple((GooCanvasItemSimple*)object);
}


/* The implementation: */

GooCanvasItemSimple* ItemSimple::gobj_copy()
{
  reference();
  return gobj();
}

ItemSimple::ItemSimple(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

ItemSimple::ItemSimple(GooCanvasItemSimple* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


ItemSimple::~ItemSimple()
{}


ItemSimple::CppClassType ItemSimple::itemsimple_class_; // initialize static member

GType ItemSimple::get_type()
{
  return itemsimple_class_.init().get_type();
}


GType ItemSimple::get_base_type()
{
  return goo_canvas_item_simple_get_type();
}


ItemSimple::ItemSimple()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(itemsimple_class_.init()))
{
  

}

void ItemSimple::set_model(const Glib::RefPtr<ItemModel>& model)
{
goo_canvas_item_simple_set_model(gobj(), Glib::unwrap(model)); 
}

void ItemSimple::get_path_bounds(const Cairo::RefPtr<Cairo::Context>& context, Bounds& bounds) const
{
goo_canvas_item_simple_get_path_bounds(const_cast<GooCanvasItemSimple*>(gobj()), (context)->cobj(), (bounds).gobj()); 
}

void ItemSimple::user_bounds_to_device(const Cairo::RefPtr<Cairo::Context>& context, Bounds& bounds)
{
goo_canvas_item_simple_user_bounds_to_device(gobj(), (context)->cobj(), (bounds).gobj()); 
}

void ItemSimple::user_bounds_to_parent(const Cairo::RefPtr<Cairo::Context>& context, Bounds& bounds)
{
goo_canvas_item_simple_user_bounds_to_parent(gobj(), (context)->cobj(), (bounds).gobj()); 
}

bool ItemSimple::check_in_path(double x, double y, const Cairo::RefPtr<Cairo::Context>& cr, PointerEvents pointer_events) const
{
  return goo_canvas_item_simple_check_in_path(const_cast<GooCanvasItemSimple*>(gobj()), x, y, (cr)->cobj(), ((GooCanvasPointerEvents)(pointer_events)));
}

void ItemSimple::paint_path(const Cairo::RefPtr<Cairo::Context>& cr)
{
goo_canvas_item_simple_paint_path(gobj(), (cr)->cobj()); 
}

void ItemSimple::changed(bool recompute_bounds)
{
goo_canvas_item_simple_changed(gobj(), static_cast<int>(recompute_bounds)); 
}

void ItemSimple::check_style()
{
goo_canvas_item_simple_check_style(gobj()); 
}

double ItemSimple::get_line_width() const
{
  return goo_canvas_item_simple_get_line_width(const_cast<GooCanvasItemSimple*>(gobj()));
}

 Bounds ItemSimple::get_bounds() const
{
  return Glib::wrap(&gobj()->bounds);
}
 
 void ItemSimple::set_bounds(const Bounds& value)
{
  gobj()->bounds = *(value).gobj();
}
 
 bool ItemSimple::get_need_update() const
{
  return gobj()->need_update;
}
 
 void ItemSimple::set_need_update(const bool& value)
{
  gobj()->need_update = static_cast<unsigned int>(value);
}
 
 bool ItemSimple::get_need_entire_subtree_update() const
{
  return gobj()->need_entire_subtree_update;
}
 
 void ItemSimple::set_need_entire_subtree_update(const bool& value)
{
  gobj()->need_entire_subtree_update = static_cast<unsigned int>(value);
}
 

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> ItemSimple::property_title() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "title");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> ItemSimple::property_title() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "title");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> ItemSimple::property_visibility_threshold() 
{
  return Glib::PropertyProxy<double>(this, "visibility-threshold");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> ItemSimple::property_visibility_threshold() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "visibility-threshold");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<ItemVisibility> ItemSimple::property_visibility() 
{
  return Glib::PropertyProxy<ItemVisibility>(this, "visibility");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<ItemVisibility> ItemSimple::property_visibility() const
{
  return Glib::PropertyProxy_ReadOnly<ItemVisibility>(this, "visibility");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> ItemSimple::property_description() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "description");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> ItemSimple::property_description() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "description");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<PointerEvents> ItemSimple::property_pointer_events() 
{
  return Glib::PropertyProxy<PointerEvents>(this, "pointer-events");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<PointerEvents> ItemSimple::property_pointer_events() const
{
  return Glib::PropertyProxy_ReadOnly<PointerEvents>(this, "pointer-events");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::Matrix*> ItemSimple::property_transform() 
{
  return Glib::PropertyProxy<Cairo::Matrix*>(this, "transform");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::Matrix*> ItemSimple::property_transform() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::Matrix*>(this, "transform");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Cairo::RefPtr<Cairo::Pattern> > ItemSimple::property_stroke_pattern() 
{
  return Glib::PropertyProxy< Cairo::RefPtr<Cairo::Pattern> >(this, "stroke-pattern");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Cairo::RefPtr<Cairo::Pattern> > ItemSimple::property_stroke_pattern() const
{
  return Glib::PropertyProxy_ReadOnly< Cairo::RefPtr<Cairo::Pattern> >(this, "stroke-pattern");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Cairo::RefPtr<Cairo::Pattern> > ItemSimple::property_fill_pattern() 
{
  return Glib::PropertyProxy< Cairo::RefPtr<Cairo::Pattern> >(this, "fill-pattern");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Cairo::RefPtr<Cairo::Pattern> > ItemSimple::property_fill_pattern() const
{
  return Glib::PropertyProxy_ReadOnly< Cairo::RefPtr<Cairo::Pattern> >(this, "fill-pattern");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::FillRule> ItemSimple::property_fill_rule() 
{
  return Glib::PropertyProxy<Cairo::FillRule>(this, "fill-rule");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::FillRule> ItemSimple::property_fill_rule() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::FillRule>(this, "fill-rule");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::Operator> ItemSimple::property_operator() 
{
  return Glib::PropertyProxy<Cairo::Operator>(this, "operator");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::Operator> ItemSimple::property_operator() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::Operator>(this, "operator");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::Antialias> ItemSimple::property_antialias() 
{
  return Glib::PropertyProxy<Cairo::Antialias>(this, "antialias");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::Antialias> ItemSimple::property_antialias() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::Antialias>(this, "antialias");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Glib::ustring> ItemSimple::property_font() 
{
  return Glib::PropertyProxy<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Glib::ustring> ItemSimple::property_font() const
{
  return Glib::PropertyProxy_ReadOnly<Glib::ustring>(this, "font");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Pango::FontDescription> ItemSimple::property_font_desc() 
{
  return Glib::PropertyProxy<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Pango::FontDescription> ItemSimple::property_font_desc() const
{
  return Glib::PropertyProxy_ReadOnly<Pango::FontDescription>(this, "font-desc");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::HintMetrics> ItemSimple::property_hint_metrics() 
{
  return Glib::PropertyProxy<Cairo::HintMetrics>(this, "hint-metrics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::HintMetrics> ItemSimple::property_hint_metrics() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::HintMetrics>(this, "hint-metrics");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> ItemSimple::property_line_width() 
{
  return Glib::PropertyProxy<double>(this, "line-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> ItemSimple::property_line_width() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "line-width");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::LineCap> ItemSimple::property_line_cap() 
{
  return Glib::PropertyProxy<Cairo::LineCap>(this, "line-cap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::LineCap> ItemSimple::property_line_cap() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::LineCap>(this, "line-cap");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::LineJoin> ItemSimple::property_line_join() 
{
  return Glib::PropertyProxy<Cairo::LineJoin>(this, "line-join");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::LineJoin> ItemSimple::property_line_join() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::LineJoin>(this, "line-join");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<double> ItemSimple::property_line_join_miter_limit() 
{
  return Glib::PropertyProxy<double>(this, "line-join-miter-limit");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<double> ItemSimple::property_line_join_miter_limit() const
{
  return Glib::PropertyProxy_ReadOnly<double>(this, "line-join-miter-limit");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<LineDash> ItemSimple::property_line_dash() 
{
  return Glib::PropertyProxy<LineDash>(this, "line-dash");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<LineDash> ItemSimple::property_line_dash() const
{
  return Glib::PropertyProxy_ReadOnly<LineDash>(this, "line-dash");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> ItemSimple::property_stroke_color() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "stroke-color");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> ItemSimple::property_stroke_color_rgba() 
{
  return Glib::PropertyProxy<guint>(this, "stroke-color-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> ItemSimple::property_stroke_color_rgba() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "stroke-color-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Gdk::Pixbuf> ItemSimple::property_stroke_pixbuf() 
{
  return Glib::PropertyProxy_WriteOnly<Gdk::Pixbuf>(this, "stroke-pixbuf");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> ItemSimple::property_fill_color() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "fill-color");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<guint> ItemSimple::property_fill_color_rgba() 
{
  return Glib::PropertyProxy<guint>(this, "fill-color-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<guint> ItemSimple::property_fill_color_rgba() const
{
  return Glib::PropertyProxy_ReadOnly<guint>(this, "fill-color-rgba");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Gdk::Pixbuf> ItemSimple::property_fill_pixbuf() 
{
  return Glib::PropertyProxy_WriteOnly<Gdk::Pixbuf>(this, "fill-pixbuf");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy< Glib::RefPtr<Item> > ItemSimple::property_parent() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Item> >(this, "parent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Item> > ItemSimple::property_parent() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Item> >(this, "parent");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<bool> ItemSimple::property_can_focus() 
{
  return Glib::PropertyProxy<bool>(this, "can-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<bool> ItemSimple::property_can_focus() const
{
  return Glib::PropertyProxy_ReadOnly<bool>(this, "can-focus");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_WriteOnly<Glib::ustring> ItemSimple::property_clip_path() 
{
  return Glib::PropertyProxy_WriteOnly<Glib::ustring>(this, "clip-path");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy<Cairo::FillRule> ItemSimple::property_clip_fill_rule() 
{
  return Glib::PropertyProxy<Cairo::FillRule>(this, "clip-fill-rule");
}
#endif //GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
Glib::PropertyProxy_ReadOnly<Cairo::FillRule> ItemSimple::property_clip_fill_rule() const
{
  return Glib::PropertyProxy_ReadOnly<Cairo::FillRule>(this, "clip-fill-rule");
}
#endif //GLIBMM_PROPERTIES_ENABLED


void Goocanvas::ItemSimple::simple_create_path_vfunc(const Cairo::RefPtr<Cairo::Context>& cr) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->simple_create_path)
    (*base->simple_create_path)(gobj(),(cr)->cobj());
}
void Goocanvas::ItemSimple::simple_update_vfunc(const Cairo::RefPtr<Cairo::Context>& cr) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->simple_update)
    (*base->simple_update)(gobj(),(cr)->cobj());
}
void Goocanvas::ItemSimple::simple_paint_vfunc(const Cairo::RefPtr<Cairo::Context>& cr, const Bounds& bounds) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->simple_paint)
    (*base->simple_paint)(gobj(),(cr)->cobj(),(bounds).gobj());
}
bool Goocanvas::ItemSimple::simple_is_item_at_vfunc(double x, double y, const Cairo::RefPtr<Cairo::Context>& cr, bool is_pointer_event) 
{
  BaseClassType *const base = static_cast<BaseClassType*>(
      g_type_class_peek_parent(G_OBJECT_GET_CLASS(gobject_)) // Get the parent class of the object class (The original underlying C class).
  );

  if(base && base->simple_is_item_at)
    return (*base->simple_is_item_at)(gobj(),x,y,(cr)->cobj(),static_cast<int>(is_pointer_event));

  typedef bool RType;
  return RType();
}


} // namespace Goocanvas

