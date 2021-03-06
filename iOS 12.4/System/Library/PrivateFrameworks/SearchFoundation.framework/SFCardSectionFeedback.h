/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFFeedback.h>

@protocol SFCardSection;
@class NSString;

@interface SFCardSectionFeedback : SFFeedback {

	id<SFCardSection> _cardSection;
	NSString* _cardSectionId;
	NSString* _resultId;

}

@property (nonatomic,retain) id<SFCardSection> cardSection;              //@synthesize cardSection=_cardSection - In the implementation block
@property (nonatomic,copy) NSString * cardSectionId;                     //@synthesize cardSectionId=_cardSectionId - In the implementation block
@property (nonatomic,copy) NSString * resultId;                          //@synthesize resultId=_resultId - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(id<SFCardSection>)cardSection;
-(id)initWithCardSection:(id)arg1 ;
-(void)setCardSectionId:(NSString *)arg1 ;
-(void)setCardSection:(id<SFCardSection>)arg1 ;
-(NSString *)cardSectionId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

