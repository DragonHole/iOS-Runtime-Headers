/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol CRCardSection <NSObject,NSCopying>
@property (nonatomic,readonly) NSString * cardSectionIdentifier; 
@property (nonatomic,readonly) id<SFCardSection> backingCardSection; 
@property (nonatomic,readonly) NSArray * actionCommands; 
@property (nonatomic,readonly) BOOL hasNextCard; 
@optional
-(NSArray *)actionCommands;
-(id<SFCardSection>)backingCardSection;
-(id)parametersForInteraction:(id)arg1;
-(BOOL)hasNextCard;

@required
-(NSString *)cardSectionIdentifier;

@end

