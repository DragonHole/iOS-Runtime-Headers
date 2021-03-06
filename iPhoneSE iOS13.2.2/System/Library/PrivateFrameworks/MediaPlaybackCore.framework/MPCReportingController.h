/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPCReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPCReportingController* _parentReportingController;

}

@property (assign,nonatomic,__weak) MPCReportingController * parentReportingController; 
@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
-(id)init;
-(void)setParentReportingController:(MPCReportingController *)arg1 ;
-(void)_recordReportingEvents:(id)arg1 ;
-(MPCReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)addChildReportingController:(id)arg1 ;
-(void)recordReportingEvents:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
@end

