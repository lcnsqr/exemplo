namespace box {

  template <typename TYPE> class Box {

    // rows, cols
    TYPE height;
    TYPE width;
    TYPE depth;

    public:
    Box();
    Box(TYPE, TYPE, TYPE);

    TYPE get_height();
    TYPE get_width();
    TYPE get_depth();

    TYPE set_height(TYPE);
    TYPE set_width(TYPE);
    TYPE set_depth(TYPE);

    TYPE volume();
    TYPE area();
  };

  template <typename TYPE> Box<TYPE>::Box(){
    this->height = 1;
    this->width = 1;
    this->depth = 1;
  }

  template <typename TYPE> Box<TYPE>::Box(TYPE height, TYPE width, TYPE depth){
    this->height = height;
    this->width = width;
    this->depth = depth;
  }

  template <typename TYPE> TYPE Box<TYPE>::get_height(){
    return this->height;
  }

  template <typename TYPE> TYPE Box<TYPE>::get_width(){
    return this->width;
  }

  template <typename TYPE> TYPE Box<TYPE>::get_depth(){
    return this->depth;
  }

  template <typename TYPE> TYPE Box<TYPE>::set_height(TYPE h){
    this->height = h;
    return this->height;
  }

  template <typename TYPE> TYPE Box<TYPE>::set_width(TYPE h){
    this->width = h;
    return this->width;
  }

  template <typename TYPE> TYPE Box<TYPE>::set_depth(TYPE d){
    this->depth = d;
    return this->depth;
  }

  template <typename TYPE> TYPE Box<TYPE>::volume(){
    return this->width * this->height * this-> depth;
  }
}
