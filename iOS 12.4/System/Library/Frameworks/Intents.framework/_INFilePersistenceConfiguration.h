/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _INFilePersistenceConfiguration : NSObject {

	NSString* _filePath;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * filePath;                //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

