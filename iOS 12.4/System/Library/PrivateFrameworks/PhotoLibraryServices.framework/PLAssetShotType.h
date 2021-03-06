/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface PLAssetShotType : NSObject {

	long long _type;
	long long _captureFlags;
	long long _procFlags;
	NSArray* _devices;
	NSString* _name;

}

@property (assign,nonatomic) long long type;                      //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long captureFlags;              //@synthesize captureFlags=_captureFlags - In the implementation block
@property (assign,nonatomic) long long procFlags;                 //@synthesize procFlags=_procFlags - In the implementation block
@property (nonatomic,retain) NSArray * devices;                   //@synthesize devices=_devices - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
+(id)allShotTypes;
-(long long)captureFlags;
-(long long)procFlags;
-(id)initWithType:(long long)arg1 captureFlags:(long long)arg2 procFlags:(long long)arg3 devices:(id)arg4 name:(id)arg5 ;
-(void)setCaptureFlags:(long long)arg1 ;
-(void)setProcFlags:(long long)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(NSArray *)devices;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
@end

