#
# Be sure to run `pod lib lint SITAMPC.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SITAMPC'
  s.version          = '3.15'
  s.summary          = 'SITAMPC SDK'

  s.description      = <<-DESC
SITA MPC SDK will provide profile management for all your travellers plus access to dynamic forms and workflows that have been defined by the concerned agencies.
                       DESC

  s.homepage         = 'https://github.com/sitalab/SITAMPC-SDK-iOS'

  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'safaakhalaf' => 'safaa@itx.com.lb' }
  s.source           = { :git => 'https://github.com/sitalab/SITAMPC-SDK-iOS.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  s.source_files = 'SITAMPC/Classes/**/*'
  s.resource_bundles = {
 'SITAMPC' => ['SITAMPC/Assets/**/*']
     }
    s.library = 'z','sqlite3','c++'
    s.frameworks = 'UIKit','SystemConfiguration','CoreData'
    s.vendored_libraries = 'SITAMPC/libSITAMPC.a'
end

