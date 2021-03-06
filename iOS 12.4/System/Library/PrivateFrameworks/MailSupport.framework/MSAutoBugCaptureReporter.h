/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SDRDiagnosticReporter;

@interface MSAutoBugCaptureReporter : NSObject {

	SDRDiagnosticReporter* _diagnosticReporter;

}

@property (nonatomic,retain) SDRDiagnosticReporter * diagnosticReporter;              //@synthesize diagnosticReporter=_diagnosticReporter - In the implementation block
+(id)sharedReporter;
+(id)log;
-(SDRDiagnosticReporter *)diagnosticReporter;
-(void)setDiagnosticReporter:(SDRDiagnosticReporter *)arg1 ;
-(void)reportIssueType:(id)arg1 description:(id)arg2 ;
-(id)init;
@end

