/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface SSVMediaSocialAdminStatus : NSObject <NSSecureCoding> {

	BOOL _admin;
	NSDate* _dateUpdated;

}

@property (nonatomic,readonly) NSDate * dateUpdated;                   //@synthesize dateUpdated=_dateUpdated - In the implementation block
@property (getter=isAdmin,nonatomic,readonly) BOOL admin;              //@synthesize admin=_admin - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAdmin;
-(id)initWithAdminStatus:(BOOL)arg1 dateUpdated:(id)arg2 ;
-(NSDate *)dateUpdated;
@end

