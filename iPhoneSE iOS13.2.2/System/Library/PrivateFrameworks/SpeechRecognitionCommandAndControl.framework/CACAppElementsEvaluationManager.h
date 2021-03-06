/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface CACAppElementsEvaluationManager : NSObject {

	NSSet* _appIdentifersForStandardFilter;
	NSString* _evaluatorOverrideClassName;

}
+(id)sharedManager;
-(id)init;
-(Class)evaluatorClassForAppIdentifier:(id)arg1 ;
-(id)_trimmedArrayOfActionableAXElements:(id)arg1 ;
-(id)actionableAXElementsFromAXElements:(id)arg1 forAppIdentifier:(id)arg2 ;
-(BOOL)isRecognitionString:(id)arg1 supportedForElement:(id)arg2 ;
@end

