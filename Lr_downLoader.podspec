
Pod::Spec.new do |spec|

  spec.name         = "Lr_downLoaders"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of Lr_downLoader."

  spec.description  = <<-DESC
                    hello world !!!!
                         DESC

  spec.homepage     = "https://github.com/123456789lk/lrs_download"
  spec.license      = "MIT"
  spec.author             = { "276118061" => "276118061@qq.com" }
  spec.platform     = :ios
  spec.platform     = :ios, "8.0"

  spec.source       = { :git => "https://github.com/123456789lk/lrs_download.git", :tag => "#{spec.version}" }

  spec.source_files  = "Lr_downLoader.framework/Headers/*.{h,m}"
  spec.ios.preserve_paths      = 'Lr_downLoader.framework'
  spec.ios.public_header_files  = 'Lr_downLoader.framework/Headers/*.h'
  spec.ios.vendored_frameworks  = 'Lr_downLoader.framework'
  spec.requires_arc = true

end
