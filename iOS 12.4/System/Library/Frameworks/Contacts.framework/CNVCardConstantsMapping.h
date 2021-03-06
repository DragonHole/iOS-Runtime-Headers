/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface CNVCardConstantsMapping : NSObject {

	NSDictionary* _mapping;

}

@property (nonatomic,retain) NSDictionary * mapping;              //@synthesize mapping=_mapping - In the implementation block
+(id)CNToVCardSocialProfileConstantsMapping;
+(id)CNToVCardInstantMessageConstantsMapping;
+(id)vCardToCNSocialProfileConstantsMapping;
+(id)vCardToCNInstantMessageConstantsMapping;
-(id)mappedConstant:(id)arg1 ;
-(id)initWithMapping:(id)arg1 ;
-(id)invertedMapping;
-(void)setMapping:(NSDictionary *)arg1 ;
-(NSDictionary *)mapping;
@end

