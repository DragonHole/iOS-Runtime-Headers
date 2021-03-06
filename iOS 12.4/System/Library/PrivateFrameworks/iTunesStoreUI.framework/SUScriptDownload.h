/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject {

	ISUDownload* _download;

}

@property (readonly) NSNumber * adamID; 
@property (readonly) NSString * phase; 
@property (readonly) float progress; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)phaseStringForDownload:(id)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)initWithISUDownload:(id)arg1 ;
-(id)initWithSSDownload:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSNumber *)adamID;
-(void)dealloc;
-(NSString *)phase;
-(float)progress;
@end

