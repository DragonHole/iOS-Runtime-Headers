/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSCore/MPSExternalPluginBase.h>

@protocol MPSExternalPluginBase <NSObject>
@required
-(id)device;
-(id)initWithDevice:(id)arg1;

@end


@protocol MTLDevice;
@class NSString;

@interface MPSExternalPluginBase : NSObject <MPSExternalPluginBase> {

	id<MTLDevice> _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)device;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(NSString *)debugDescription;
@end

