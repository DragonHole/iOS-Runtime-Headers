/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRITaskPersisting;
@class TRIExperimentDatabase;

@interface TRIDatabase : NSObject {

	TRIExperimentDatabase* _experiments;
	id<TRITaskPersisting> _tasks;

}

@property (readonly) TRIExperimentDatabase * experiments; 
@property (readonly) id<TRITaskPersisting> tasks; 
+(id)sharedDatabase;
-(id)init;
-(id<TRITaskPersisting>)tasks;
-(TRIExperimentDatabase *)experiments;
@end

