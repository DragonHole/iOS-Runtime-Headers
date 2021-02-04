/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface ShotflowHelpers : NSObject
+(id)setCIContext:(id)arg1 ;
+(id)resizeImage:(id)arg1 byX:(float)arg2 andY:(float)arg3 ;
+(id)resizeImage:(id)arg1 to:(CGSize)arg2 ;
+(shared_ptr<vImage_Buffer>*)getCGImageAsVImageBuffer:(CGImageRef)arg1 ;
+(shared_ptr<CGImage>*)getCGImageFromCIImage:(id)arg1 ;
+(id)resizeImage:(id)arg1 toWidth:(unsigned long long)arg2 andHeight:(unsigned long long)arg3 ;
@end
