/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUVideoCacheNode.h>

@interface PIAutoLoopCacheNode : NUVideoCacheNode
+(id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)persistentURL;
-(id)resolvedNodeWithCachedInputs:(NSDictionary*)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(long long)subsampleFactorForScale:(SCD_Struct_PI1)arg1 ;
-(id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id*)arg2 ;
-(id)descriptionSubClassHook;
-(id)outputSettings:(out id*)arg1 ;
-(id)persistentLongExposureURL;
-(id)persistentMaskURL;
@end

