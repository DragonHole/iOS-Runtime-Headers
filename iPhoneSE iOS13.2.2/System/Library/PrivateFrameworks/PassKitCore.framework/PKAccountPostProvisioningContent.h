/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKAccountPostProvisioningContent : NSObject {

	unsigned long long _type;
	NSString* _title;
	NSString* _subTitle;
	NSString* _body;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subTitle;                          //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;              //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)subTitle;
-(NSString *)secondaryButtonTitle;
-(NSString *)primaryButtonTitle;
@end
