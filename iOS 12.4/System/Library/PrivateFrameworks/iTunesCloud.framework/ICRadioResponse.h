/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, ICStoreDialogResponse, NSError;

@interface ICRadioResponse : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * contentDictionary; 
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,copy,readonly) ICStoreDialogResponse * dialog; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSError * serverError; 
-(id)initWithURLResponse:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(NSDictionary *)contentDictionary;
-(id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(ICStoreDialogResponse *)dialog;
-(NSError *)serverError;
-(NSDate *)expirationDate;
@end

