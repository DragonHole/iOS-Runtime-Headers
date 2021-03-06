/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <libobjc.A.dylib/AdditionalInfoProtocol.h>

@class NSString;

@interface ProcessInfoGenerator : NSObject <ConfigurableObjectProtocol, AdditionalInfoProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)configureClass:(id)arg1 ;
+(id)generateAdditionalInfo:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(id)generateAdditionalInfo:(id)arg1 ;
@end

