/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUVideoExportJob.h>

@interface PIAutoLoopExportJob : NUVideoExportJob
+(BOOL)shouldUseMetalRenderer;
+(id)metalRenderer;
-(BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(SCD_Struct_PI11)arg3 error:(out id*)arg4 ;
-(id)initWithVideoExportRequest:(id)arg1 ;
-(id)initWithAutoLoopExportRequest:(id)arg1 ;
-(id)autoLoopExportRequest;
-(id)renderer;
@end

