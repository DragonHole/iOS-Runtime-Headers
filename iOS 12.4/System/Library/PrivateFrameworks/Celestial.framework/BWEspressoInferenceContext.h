/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWEspressoInferenceContext : NSObject {

	int _executionTarget;
	void* _espressoContext;
	unsigned long long _options;

}

@property (nonatomic,readonly) int executionTarget;                          //@synthesize executionTarget=_executionTarget - In the implementation block
@property (nonatomic,readonly) void* espressoContext; 
@property (getter=isPrepared,nonatomic,readonly) BOOL prepared; 
-(int)executionTarget;
-(id)initWithExecutionTarget:(int)arg1 ;
-(void*)espressoContext;
-(int)prepareForInferenceUsingProcessingSession:(OpaqueFigCaptureISPProcessingSessionRef)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isPrepared;
@end

