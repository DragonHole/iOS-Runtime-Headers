/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class CLLocation, NSString, INImage;


@protocol INRideVehicleExport <NSObject,JSExport>
@property (nonatomic,copy) CLLocation * location; 
@property (nonatomic,copy) NSString * registrationPlate; 
@property (nonatomic,copy) NSString * manufacturer; 
@property (nonatomic,copy) NSString * model; 
@property (nonatomic,copy) INImage * mapAnnotationImage; 
@required
-(void)setManufacturer:(id)arg1;
-(NSString *)manufacturer;
-(INImage *)mapAnnotationImage;
-(void)setMapAnnotationImage:(id)arg1;
-(NSString *)registrationPlate;
-(void)setRegistrationPlate:(id)arg1;
-(void)setModel:(id)arg1;
-(id)init;
-(CLLocation *)location;
-(NSString *)model;
-(void)setLocation:(id)arg1;

@end

