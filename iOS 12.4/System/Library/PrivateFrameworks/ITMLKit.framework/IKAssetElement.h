/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSNumber, NSURL, NSString;

@interface IKAssetElement : IKViewElement {

	BOOL _infiniteDuration;

}

@property (nonatomic,retain,readonly) NSNumber * persistentID; 
@property (nonatomic,retain,readonly) NSNumber * rentalAdamID; 
@property (nonatomic,retain,readonly) NSURL * url; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long keyDelivery; 
@property (getter=isInfiniteDuration,nonatomic,readonly) BOOL infiniteDuration;              //@synthesize infiniteDuration=_infiniteDuration - In the implementation block
@property (nonatomic,retain,readonly) NSString * actionParams; 
@property (nonatomic,retain,readonly) NSString * adamID; 
@property (nonatomic,retain,readonly) NSURL * extrasURL; 
@property (nonatomic,retain,readonly) NSString * bookmarkID; 
@property (nonatomic,retain,readonly) NSString * contentID; 
@property (nonatomic,retain,readonly) NSString * externalID; 
@property (nonatomic,retain,readonly) NSString * serviceID; 
+(BOOL)shouldParseChildDOMElements;
-(id)_numberForAttribute:(id)arg1 ;
-(BOOL)infiniteDuration;
-(BOOL)isInfiniteDuration;
-(NSString *)contentID;
-(NSNumber *)persistentID;
-(NSString *)adamID;
-(long long)keyDelivery;
-(NSNumber *)rentalAdamID;
-(NSString *)serviceID;
-(long long)type;
-(NSURL *)url;
-(NSURL *)extrasURL;
-(NSString *)actionParams;
-(NSString *)externalID;
-(NSString *)bookmarkID;
@end

