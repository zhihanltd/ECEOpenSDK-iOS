#
# Be sure to run `pod lib lint ECEOpenSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ECEOpenSDK-iOS'
  s.version          = '1.0.0'
  s.platform         = :ios
  s.ios.deployment_target = '9.0'
  s.summary          = 'ECEOpenSDK-iOS'
  s.homepage         = 'https://github.com/zhihanltd/ECEOpenSDK-iOS.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = 'Hangzhou ZhiHan'
  s.source           = { :git => 'https://github.com/zhihanltd/ECEOpenSDK-iOS.git', :tag => s.version.to_s }
  s.pod_target_xcconfig = {"PRODUCT_BUNDLE_IDENTIFIER" => "com.zhihan.ECEOpenSDK" ,"DEVELOPMENT_TEAM" => "Jing Li", 'VALID_ARCHS' => 'arm64 armv7 armv7s x86_64'}

  s.vendored_frameworks = 'Framework/ECEOpenSDK.framework'
  s.resource = 'Framework/ECEOpenSDK.bundle'

  s.dependency 'Masonry'
  s.dependency 'AFNetworking'

end
