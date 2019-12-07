/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSPasswordWordListCollection, WBSPasswordPatternMatcher;

@interface WBSPasswordEvaluator : NSObject {

	WBSPasswordWordListCollection* _passwordWordListCollection;
	WBSPasswordWordListCollection* _passcodeWordListCollection;
	WBSPasswordPatternMatcher* _patternMatcher;

}
+(BOOL)passwordLooksLikeDigitOnlyPasscode:(id)arg1 ;
+(id)standardPasswordEvaluator;
-(id)_initWithPasswordWordListCollection:(id)arg1 passcodeWordListCollection:(id)arg2 ;
-(id)evaluatePassword:(id)arg1 ;
@end
