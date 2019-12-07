/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class PGManager, NSObject, PHFetchResult;

@interface PHAQuestionController : NSObject {

	PGManager* _graphManager;
	NSObject*<OS_os_log> _loggingConnection;
	PHFetchResult* _persons;

}

@property (nonatomic,retain) PGManager * graphManager;                            //@synthesize graphManager=_graphManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
@property (nonatomic,retain) PHFetchResult * persons;                             //@synthesize persons=_persons - In the implementation block
-(PGManager *)graphManager;
-(void)setGraphManager:(PGManager *)arg1 ;
-(PHFetchResult *)persons;
-(void)setPersons:(PHFetchResult *)arg1 ;
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)generateQuestionsWithType:(long long)arg1 limit:(unsigned long long)arg2 progress:(/*^block*/id)arg3 ;
-(id)existingQuestionsForType:(long long)arg1 ;
-(id)_factoryForType:(long long)arg1 manager:(id)arg2 ;
-(id)_stringForQuestionType:(long long)arg1 ;
-(NSObject*<OS_os_log>)loggingConnection;
-(void)setLoggingConnection:(NSObject*<OS_os_log>)arg1 ;
@end
