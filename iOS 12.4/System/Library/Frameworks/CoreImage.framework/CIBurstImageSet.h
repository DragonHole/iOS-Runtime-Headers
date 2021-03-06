/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIBurstImageSetInternal;

@interface CIBurstImageSet : NSObject {

	CIBurstImageSetInternal* _priv;

}
+(id)burstImageSet;
+(id)burstImageSetWithOptions:(id)arg1 ;
+(id)defaultVersionString;
-(id)statsForImageWithIdentifier:(id)arg1 ;
-(unsigned long long)imageClusterCount;
-(id)imageClusterForIndex:(unsigned long long)arg1 ;
-(void)setLoggingListener:(void*)arg1 withUserInfo:(void*)arg2 ;
-(BOOL)isPortrait;
-(BOOL)isAction;
-(double)secondsSinceStart;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(id)burstId;
-(id)allImageIdentifiers;
-(id)bestImageIdentifiers;
-(id)coverImageIdentifier;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end

