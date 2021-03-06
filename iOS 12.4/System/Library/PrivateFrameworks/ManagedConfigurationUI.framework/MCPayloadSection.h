/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:47 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSMutableArray* _payloadInfos;

}

@property (nonatomic,retain) NSString * sectionTitle;                    //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                   //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSMutableArray * payloadInfos;              //@synthesize payloadInfos=_payloadInfos - In the implementation block
-(void)setSectionFooter:(NSString *)arg1 ;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionTitle;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3 ;
-(NSMutableArray *)payloadInfos;
-(void)setPayloadInfos:(NSMutableArray *)arg1 ;
-(NSString *)sectionFooter;
-(id)init;
@end

