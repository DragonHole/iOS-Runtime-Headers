/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKServerChangeToken;

@interface CKFetchNotificationChangesOperationResult : CKOperationResult <NSSecureCoding> {

	BOOL _moreComing;
	CKServerChangeToken* _serverChangeToken;

}

@property (nonatomic,retain) CKServerChangeToken * serverChangeToken;              //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                                      //@synthesize moreComing=_moreComing - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(CKServerChangeToken *)serverChangeToken;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
@end

