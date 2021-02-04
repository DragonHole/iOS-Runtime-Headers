/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNReaderWriterScheduler.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler> {

	CNSuspendableSchedulerDecorator* _scheduler;

}

@property (nonatomic,readonly) CNSuspendableSchedulerDecorator * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)performReaderBlock:(/*^block*/id)arg1 ;
-(id)performWriterBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousReaderBlock:(/*^block*/id)arg1 ;
-(void)performSynchronousWriterBlock:(/*^block*/id)arg1 ;
-(id)initWithScheduler:(id)arg1 ;
-(CNSuspendableSchedulerDecorator *)scheduler;
-(id)init;
-(void)resume;
-(void)suspend;
@end
