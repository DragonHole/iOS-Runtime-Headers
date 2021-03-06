/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class AMSDeviceOffer, NSNumber, NSString;

@interface SUScriptDeviceOffer : SUScriptObject {

	AMSDeviceOffer* _offer;

}

@property (nonatomic,retain) AMSDeviceOffer * offer;                             //@synthesize offer=_offer - In the implementation block
@property (nonatomic,readonly) AMSDeviceOffer * nativeOffer; 
@property (nonatomic,readonly) NSNumber * adamId; 
@property (nonatomic,readonly) NSString * description; 
@property (getter=isDowngrading,nonatomic,readonly) id downgrading; 
@property (nonatomic,readonly) unsigned long long offerType; 
@property (getter=isSubscribed,nonatomic,readonly) id subscribed; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(void)setAdamId:(NSNumber *)arg1 ;
-(NSNumber *)adamId;
-(void)setSubscribed:(id)arg1 ;
-(id)isSubscribed;
-(unsigned long long)offerType;
-(id)initWithDeviceOffer:(id)arg1 ;
-(id)isDowngrading;
-(AMSDeviceOffer *)nativeOffer;
-(void)setDowngrading:(id)arg1 ;
-(void)setOffer:(AMSDeviceOffer *)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setOfferType:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)setDescription:(NSString *)arg1 ;
-(AMSDeviceOffer *)offer;
@end

