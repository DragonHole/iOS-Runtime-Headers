/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBSectionSubtypeParameters, NSMutableDictionary, NSString, BBSectionIcon, NSUUID;

@interface BBSectionParameters : NSObject <NSSecureCoding> {

	BOOL _showsSubtitle;
	BOOL _usesVariableLayout;
	BOOL _orderSectionUsingRecencyDate;
	BOOL _showsDateInFloatingLockScreenAlert;
	BOOL _displaysCriticalBulletins;
	unsigned long long _messageNumberOfLines;
	BBSectionSubtypeParameters* _defaultSubtypeParameters;
	NSMutableDictionary* _allSubtypeParameters;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSUUID* _UUID;

}

@property (nonatomic,retain) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) BBSectionSubtypeParameters * defaultSubtypeParameters;              //@synthesize defaultSubtypeParameters=_defaultSubtypeParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * allSubtypeParameters;                         //@synthesize allSubtypeParameters=_allSubtypeParameters - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) BBSectionIcon * icon;                                               //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) BOOL displaysCriticalBulletins;                                     //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (assign,nonatomic) BOOL showsSubtitle;                                                 //@synthesize showsSubtitle=_showsSubtitle - In the implementation block
@property (assign,nonatomic) BOOL usesVariableLayout;                                            //@synthesize usesVariableLayout=_usesVariableLayout - In the implementation block
@property (assign,nonatomic) unsigned long long messageNumberOfLines;                            //@synthesize messageNumberOfLines=_messageNumberOfLines - In the implementation block
@property (assign,nonatomic) BOOL orderSectionUsingRecencyDate;                                  //@synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate - In the implementation block
@property (assign,nonatomic) BOOL showsDateInFloatingLockScreenAlert;                            //@synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)replacementObjectForCoder:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setShowsSubtitle:(BOOL)arg1 ;
-(void)setOrderSectionUsingRecencyDate:(BOOL)arg1 ;
-(void)setShowsDateInFloatingLockScreenAlert:(BOOL)arg1 ;
-(void)setDefaultSubtypeParameters:(BBSectionSubtypeParameters *)arg1 ;
-(void)setAllSubtypeParameters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)allSubtypeParameters;
-(BOOL)showsSubtitle;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(id)allSubtypes;
-(void)setDisplaysCriticalBulletins:(BOOL)arg1 ;
-(BBSectionSubtypeParameters *)defaultSubtypeParameters;
-(id)parametersForSubtype:(long long)arg1 ;
-(unsigned long long)messageNumberOfLines;
-(BOOL)displaysCriticalBulletins;
-(void)setUsesVariableLayout:(BOOL)arg1 ;
-(void)setMessageNumberOfLines:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)UUID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(void)setUUID:(NSUUID *)arg1 ;
-(NSString *)displayName;
@end
