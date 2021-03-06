/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface _UIPasteboardOptions : NSObject {

	BOOL _localOnly;
	NSDate* _expirationDate;

}

@property (assign,getter=isLocalOnly,nonatomic) BOOL localOnly;              //@synthesize localOnly=_localOnly - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)optionsWithDictionary:(id)arg1 ;
-(id)initWithOptionsDictionary:(id)arg1 ;
-(BOOL)isLocalOnly;
-(void)setLocalOnly:(BOOL)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
@end

