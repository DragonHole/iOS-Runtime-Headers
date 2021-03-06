/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Stocks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TUWindowToolbarItem : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
+(id)flexibleSpaceItem;
-(void)updateToolbarItemWithHandler:(id)arg1 ;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
@end

