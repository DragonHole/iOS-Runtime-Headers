/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSWPChangeSessionManager.h>

@class TSWPChangeSession;

@interface TSWPTestChangeSessionManager : NSObject <TSWPChangeSessionManager> {

	TSWPChangeSession* _currentSession;

}

@property (nonatomic,readonly) BOOL isTrackingChanges; 
-(void)dealloc;
-(id)initWithContext:(id)arg1 ;
-(id)changeSessionAuthorCreatedWithCommand:(id*)arg1 ;
-(void)startNewChangeSessionIfNecessaryGettingInsertAuthorCommand:(id*)arg1 ;
-(BOOL)isTrackingChanges;
@end

