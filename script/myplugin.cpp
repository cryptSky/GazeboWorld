#include <gazebo/gazebo.hh>

namespace gazebo
{
  class myplugin : public WorldPlugin
  {
    public: myplugin() : WorldPlugin()
            {
              printf("Hello World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(myplugin)
}
