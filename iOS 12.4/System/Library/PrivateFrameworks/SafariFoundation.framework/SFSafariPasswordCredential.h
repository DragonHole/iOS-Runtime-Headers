/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol SFSafariPasswordCredential <NSCopying,NSObject,NSSecureCoding>
@property (nonatomic,copy,readonly) NSString * user; 
@property (nonatomic,copy,readonly) NSString * site; 
@property (nonatomic,copy,readonly) NSString * password; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@required
-(NSDate *)creationDate;
-(NSString *)site;
-(NSString *)user;
-(BOOL)isExternal;
-(NSString *)password;

@end
