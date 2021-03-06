/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _IKDOMPrototypeDerivationRules : NSObject {

	NSArray* _conditionalities;
	NSArray* _indexPath;

}

@property (nonatomic,copy,readonly) NSArray * conditionalities;              //@synthesize conditionalities=_conditionalities - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexPath;                     //@synthesize indexPath=_indexPath - In the implementation block
+(id)derivationRulesForDOMElement:(id)arg1 ;
+(void)removeRulesFromDOMElement:(id)arg1 ;
-(id)initWithIndexPath:(id)arg1 conditionalities:(id)arg2 ;
-(NSArray *)conditionalities;
-(NSArray *)indexPath;
@end

