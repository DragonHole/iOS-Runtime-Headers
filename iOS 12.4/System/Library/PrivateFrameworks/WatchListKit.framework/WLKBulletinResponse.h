/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class BBActionResponse, NSString, NSDictionary;

@interface WLKBulletinResponse : NSObject <NSSecureCoding> {

	BBActionResponse* _actionResponse;

}

@property (nonatomic,retain) BBActionResponse * actionResponse;                  //@synthesize actionResponse=_actionResponse - In the implementation block
@property (nonatomic,readonly) long long bulletinSource; 
@property (nonatomic,copy,readonly) NSString * coalescingID; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,copy,readonly) NSDictionary * bulletinMetrics; 
@property (nonatomic,copy,readonly) NSDictionary * actionMetrics; 
@property (nonatomic,copy,readonly) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(void)setActionResponse:(BBActionResponse *)arg1 ;
-(long long)bulletinSource;
-(BBActionResponse *)actionResponse;
-(NSString *)coalescingID;
-(NSDictionary *)bulletinMetrics;
-(NSDictionary *)actionMetrics;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSString *)message;
@end

