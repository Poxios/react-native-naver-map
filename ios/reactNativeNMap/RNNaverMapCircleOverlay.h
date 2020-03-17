//
//  RNNaverMapCircleOverlay.h
//
//  Created by flask on 17/03/2020.
//  Copyright © 2020 flask. All rights reserved.
//

#import <React/RCTBridge.h>
#import <NMapsMap/NMGLatLng.h>
#import <NMapsMap/NMFCircleOverlay.h>

#import "RCTConvert+NMFMapView.h"

@interface RNNaverMapCircleOverlay : UIView

@property (nonatomic, weak) RCTBridge *bridge;
@property (nonatomic, strong) NMFCircleOverlay *realOverlay;

@property (nonatomic, assign) NMGLatLng *center;
@property (nonatomic, assign) CGFloat radius;
@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) CGFloat outlineWidth;
@property (nonatomic, strong) UIColor *outlineColor;
@property (nonatomic, assign) NSInteger zIndex;

@end
