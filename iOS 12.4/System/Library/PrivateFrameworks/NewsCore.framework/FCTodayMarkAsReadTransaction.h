/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCTodayPrivateDataTransaction.h>

@class NSString, NSDate;

@interface FCTodayMarkAsReadTransaction : NSObject <FCTodayPrivateDataTransaction> {

	NSString* _articleID;
	long long _articleVersion;
	NSDate* _readDate;

}

@property (nonatomic,copy) NSString * articleID;                    //@synthesize articleID=_articleID - In the implementation block
@property (assign,nonatomic) long long articleVersion;              //@synthesize articleVersion=_articleVersion - In the implementation block
@property (nonatomic,copy) NSDate * readDate;                       //@synthesize readDate=_readDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)articleID;
-(void)setArticleID:(NSString *)arg1 ;
-(long long)articleVersion;
-(NSDate *)readDate;
-(id)initWithArticleID:(id)arg1 articleVersion:(long long)arg2 readDate:(id)arg3 ;
-(void)performWithPrivateDataContext:(id)arg1 ;
-(void)performWithTodayPrivateData:(id)arg1 ;
-(void)setArticleVersion:(long long)arg1 ;
-(void)setReadDate:(NSDate *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
