/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FCMultiStepFetchOperationStep : NSObject {

	BOOL _isCritical;
	SEL _fetchSelector;

}

@property (assign,nonatomic) SEL fetchSelector;              //@synthesize fetchSelector=_fetchSelector - In the implementation block
@property (assign,nonatomic) BOOL isCritical;                //@synthesize isCritical=_isCritical - In the implementation block
-(void)setFetchSelector:(SEL)arg1 ;
-(void)setIsCritical:(BOOL)arg1 ;
-(SEL)fetchSelector;
-(BOOL)isCritical;
@end
