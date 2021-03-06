/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:48 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface KernelEventMonitor : NSObject <ConfigurableObjectProtocol> {

	NSString* _symptomName;
	int _nativeSocket;
	int _nativeSocket6;
	NSObject*<OS_dispatch_source> _kernelNotificationSource;
	NSObject*<OS_dispatch_source> _kernelNotificationSource6;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)sharedInstance;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_handleNetworkEvent:(kern_event_msg*)arg1 ;
-(void)_handleSocket:(int)arg1 ;
-(void)initListening;
-(NSString *)description;
@end

