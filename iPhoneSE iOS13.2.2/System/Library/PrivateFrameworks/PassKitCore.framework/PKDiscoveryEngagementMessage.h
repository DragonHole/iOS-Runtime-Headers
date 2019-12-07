/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _reportIdentifierToAggd;
	long long _type;
	long long _passQualifier;
	NSString* _titleKey;
	NSString* _messageKey;
	NSDictionary* _iconURLs;
	PKDiscoveryEngagementMessageAction* _action;
	NSString* _localizedTitle;
	NSString* _localizedMessage;

}

@property (assign,nonatomic) long long type;                                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long passQualifier;                                                   //@synthesize passQualifier=_passQualifier - In the implementation block
@property (nonatomic,retain) NSString * titleKey;                                                       //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,retain) NSString * messageKey;                                                     //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,retain) NSDictionary * iconURLs;                                                   //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,retain) PKDiscoveryEngagementMessageAction * action;                               //@synthesize action=_action - In the implementation block
@property (assign,getter=canReportIdentifierToAggd,nonatomic) BOOL reportIdentifierToAggd;              //@synthesize reportIdentifierToAggd=_reportIdentifierToAggd - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                                               //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedMessage;                                             //@synthesize localizedMessage=_localizedMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKDiscoveryEngagementMessageAction *)action;
-(NSString *)localizedTitle;
-(void)setAction:(PKDiscoveryEngagementMessageAction *)arg1 ;
-(NSDictionary *)iconURLs;
-(NSString *)localizedMessage;
-(NSString *)titleKey;
-(void)setTitleKey:(NSString *)arg1 ;
-(void)setIconURLs:(NSDictionary *)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(void)localizeWithBundle:(id)arg1 ;
-(long long)passQualifier;
-(NSString *)messageKey;
-(BOOL)canReportIdentifierToAggd;
-(void)updateWithDiscoveryEngagementMessage:(id)arg1 ;
-(void)setPassQualifier:(long long)arg1 ;
-(void)setMessageKey:(NSString *)arg1 ;
-(void)setReportIdentifierToAggd:(BOOL)arg1 ;
@end
