/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TMLMacroText : NSObject {

	NSString* macroText;
	NSString* basePath;
	NSString* filename;

}

@property (nonatomic,retain) NSString * macroText; 
@property (nonatomic,retain) NSString * basePath; 
@property (nonatomic,retain) NSString * filename; 
+(id)macroTextWithMacroText:(id)arg1 basePath:(id)arg2 filename:(id)arg3 ;
-(void)setFilename:(NSString *)arg1 ;
-(void)setBasePath:(NSString *)arg1 ;
-(NSString *)basePath;
-(void)setMacroText:(NSString *)arg1 ;
-(NSString *)macroText;
-(NSString *)filename;
@end

