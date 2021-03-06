/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface RTAIDCallObserver : NSObject <CXCallObserverDelegate> {

	CXCallObserver* _callObserver;
	/*^block*/id _callReporterBlock;

}

@property (nonatomic,retain) CXCallObserver * callObserver;              //@synthesize callObserver=_callObserver - In the implementation block
@property (nonatomic,copy) id callReporterBlock;                         //@synthesize callReporterBlock=_callReporterBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(CXCallObserver *)callObserver;
-(void)setCallObserver:(CXCallObserver *)arg1 ;
-(id)initWithCallReporterBlock:(/*^block*/id)arg1 ;
-(id)callReporterBlock;
-(void)setCallReporterBlock:(id)arg1 ;
@end

