/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCForYouCatchUpCondition : NSObject {

	long long _contentTypes;
	/*^block*/id _testBlock;

}

@property (assign,nonatomic) long long contentTypes;              //@synthesize contentTypes=_contentTypes - In the implementation block
@property (nonatomic,copy) id testBlock;                          //@synthesize testBlock=_testBlock - In the implementation block
+(id)caughtUpWithContentTypes:(long long)arg1 ;
+(id)caughtUpWithContentTypes:(long long)arg1 orPassingTestBlock:(/*^block*/id)arg2 ;
-(long long)contentTypes;
-(BOOL)isSatisfiedWithCatchUpOperation:(id)arg1 ;
-(void)setContentTypes:(long long)arg1 ;
-(void)setTestBlock:(id)arg1 ;
-(id)testBlock;
@end

