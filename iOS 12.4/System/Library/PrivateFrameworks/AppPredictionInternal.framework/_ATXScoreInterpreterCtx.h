/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATXScoreDict, NSString;

@interface _ATXScoreInterpreterCtx : NSObject {

	unsigned long long stackLen;
	double stack[500];
	ATXScoreDict* inputScores;
	ATXScoreDict* subscores;
	NSString* intentType;

}
-(id)initWithInputScores:(id)arg1 intentType:(id)arg2 ;
@end
