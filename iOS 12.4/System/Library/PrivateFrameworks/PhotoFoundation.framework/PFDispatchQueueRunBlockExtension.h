/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFDispatchQueueExtension.h>

@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension
+(id)sharedRunBlockExtension;
+(id)alloc;
+(void)initialize;
-(id)initInternal;
-(void)installOnQueue:(id)arg1 ;
-(id)queue:(id)arg1 willTargetQueue:(id)arg2 ;
-(void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(/*^block*/id)arg3 ;
-(void)queue:(id)arg1 didExecute:(id)arg2 ;
-(void)queue:(id)arg1 skippedExecuting:(id)arg2 ;
-(id)init;
@end
