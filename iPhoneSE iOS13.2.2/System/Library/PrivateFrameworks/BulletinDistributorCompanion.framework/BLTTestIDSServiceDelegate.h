/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSServiceDelegate, OS_dispatch_queue;
@class NSObject;

@interface BLTTestIDSServiceDelegate : NSObject {

	id<IDSServiceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) id<IDSServiceDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<IDSServiceDelegate>)delegate;
-(void)setDelegate:(id<IDSServiceDelegate>)arg1 ;
@end

