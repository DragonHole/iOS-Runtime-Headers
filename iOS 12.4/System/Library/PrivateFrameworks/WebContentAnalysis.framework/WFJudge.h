/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFLSMMap;

@interface WFJudge : NSObject {

	WFLSMMap* map;

}
+(id)defaultLSMMapPath;
+(id)defaultJudge;
-(id)initWithMap:(id)arg1 ;
-(id)_pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5 ;
@end
